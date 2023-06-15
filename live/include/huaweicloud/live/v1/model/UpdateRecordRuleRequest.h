
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateRecordRuleRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateRecordRuleRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/RecordRuleRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateRecordRuleRequest
    : public ModelBase
{
public:
    UpdateRecordRuleRequest();
    virtual ~UpdateRecordRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateRecordRuleRequest members

    /// <summary>
    /// 规则ID，在创建成功规则后返回
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecordRuleRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RecordRuleRequest& value);


protected:
    std::string id_;
    bool idIsSet_;
    RecordRuleRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRecordRuleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRecordRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateRecordRuleRequest_H_
