
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListOtaModulesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListOtaModulesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/OtaModuleInfo.h>
#include <vector>
#include <huaweicloud/iotda/v5/model/PageInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListOtaModulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOtaModulesResponse();
    virtual ~ListOtaModulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOtaModulesResponse members

    /// <summary>
    /// 模块列表
    /// </summary>

    std::vector<OtaModuleInfo>& getModules();
    bool modulesIsSet() const;
    void unsetmodules();
    void setModules(const std::vector<OtaModuleInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const PageInfo& value);


protected:
    std::vector<OtaModuleInfo> modules_;
    bool modulesIsSet_;
    PageInfo page_;
    bool pageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListOtaModulesResponse_H_
