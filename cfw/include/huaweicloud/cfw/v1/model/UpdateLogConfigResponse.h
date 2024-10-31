
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateLogConfigResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateLogConfigResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateLogConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateLogConfigResponse();
    virtual ~UpdateLogConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogConfigResponse members

    /// <summary>
    /// 更新日志配置返回值，为防火墙id
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);


protected:
    std::string data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateLogConfigResponse_H_
