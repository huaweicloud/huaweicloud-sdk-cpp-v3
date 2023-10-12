
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordIndexRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordIndexRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/RecordIndexRequestBody.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateRecordIndexRequest
    : public ModelBase
{
public:
    CreateRecordIndexRequest();
    virtual ~CreateRecordIndexRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRecordIndexRequest members

    /// <summary>
    /// 
    /// </summary>

    RecordIndexRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RecordIndexRequestBody& value);


protected:
    RecordIndexRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRecordIndexRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRecordIndexRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordIndexRequest_H_
