
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_SuccessRsp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_SuccessRsp_data_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 响应体
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  SuccessRsp_data
    : public ModelBase
{
public:
    SuccessRsp_data();
    virtual ~SuccessRsp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SuccessRsp_data members

    /// <summary>
    /// 标识ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_SuccessRsp_data_H_
