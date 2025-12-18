
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowMgmtSiteStatusRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowMgmtSiteStatusRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowMgmtSiteStatusRequest
    : public ModelBase
{
public:
    ShowMgmtSiteStatusRequest();
    virtual ~ShowMgmtSiteStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMgmtSiteStatusRequest members

    /// <summary>
    /// 模版类型。
    /// </summary>

    std::string getXSchemaType() const;
    bool xSchemaTypeIsSet() const;
    void unsetxSchemaType();
    void setXSchemaType(const std::string& value);


protected:
    std::string xSchemaType_;
    bool xSchemaTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowMgmtSiteStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowMgmtSiteStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowMgmtSiteStatusRequest_H_
