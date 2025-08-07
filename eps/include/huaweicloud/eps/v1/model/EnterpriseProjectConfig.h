
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_EnterpriseProjectConfig_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_EnterpriseProjectConfig_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  EnterpriseProjectConfig
    : public ModelBase
{
public:
    EnterpriseProjectConfig();
    virtual ~EnterpriseProjectConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnterpriseProjectConfig members

    /// <summary>
    /// 是否支持企业项目删除
    /// </summary>

    std::string getDeleteEpSupport() const;
    bool deleteEpSupportIsSet() const;
    void unsetdeleteEpSupport();
    void setDeleteEpSupport(const std::string& value);


protected:
    std::string deleteEpSupport_;
    bool deleteEpSupportIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_EnterpriseProjectConfig_H_
