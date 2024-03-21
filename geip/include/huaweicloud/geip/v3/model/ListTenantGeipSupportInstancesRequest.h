
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListTenantGeipSupportInstancesRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListTenantGeipSupportInstancesRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListTenantGeipSupportInstancesRequest
    : public ModelBase
{
public:
    ListTenantGeipSupportInstancesRequest();
    virtual ~ListTenantGeipSupportInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantGeipSupportInstancesRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getAccessSite() const;
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);


protected:
    std::string accessSite_;
    bool accessSiteIsSet_;
    std::vector<std::string> fields_;
    bool fieldsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTenantGeipSupportInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTenantGeipSupportInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListTenantGeipSupportInstancesRequest_H_
