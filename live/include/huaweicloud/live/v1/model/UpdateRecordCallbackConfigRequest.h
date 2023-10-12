
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateRecordCallbackConfigRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateRecordCallbackConfigRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/RecordCallbackConfigRequest.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateRecordCallbackConfigRequest
    : public ModelBase
{
public:
    UpdateRecordCallbackConfigRequest();
    virtual ~UpdateRecordCallbackConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecordCallbackConfigRequest members

    /// <summary>
    /// 配置ID，在创建配置成功后返回
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecordCallbackConfigRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RecordCallbackConfigRequest& value);


protected:
    std::string id_;
    bool idIsSet_;
    RecordCallbackConfigRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRecordCallbackConfigRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRecordCallbackConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateRecordCallbackConfigRequest_H_
