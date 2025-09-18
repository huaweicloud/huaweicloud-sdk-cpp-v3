
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ShowIpGroupRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ShowIpGroupRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ShowIpGroupRequest
    : public ModelBase
{
public:
    ShowIpGroupRequest();
    virtual ~ShowIpGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpGroupRequest members

    /// <summary>
    /// IP地址组ID。
    /// </summary>

    std::string getIpGroupId() const;
    bool ipGroupIdIsSet() const;
    void unsetipGroupId();
    void setIpGroupId(const std::string& value);


protected:
    std::string ipGroupId_;
    bool ipGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIpGroupRequest& dereference_from_shared_ptr(std::shared_ptr<ShowIpGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ShowIpGroupRequest_H_
