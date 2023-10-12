
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplateDetailsRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplateDetailsRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListMessageTemplateDetailsRequest
    : public ModelBase
{
public:
    ListMessageTemplateDetailsRequest();
    virtual ~ListMessageTemplateDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMessageTemplateDetailsRequest members

    /// <summary>
    /// 模板唯一的资源标识，可通过查询[消息模板列表](ListMessageTemplates.xml)获取该标识。
    /// </summary>

    std::string getMessageTemplateId() const;
    bool messageTemplateIdIsSet() const;
    void unsetmessageTemplateId();
    void setMessageTemplateId(const std::string& value);


protected:
    std::string messageTemplateId_;
    bool messageTemplateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMessageTemplateDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ListMessageTemplateDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplateDetailsRequest_H_
