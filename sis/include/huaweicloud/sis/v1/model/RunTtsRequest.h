
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RunTtsRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RunTtsRequest_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/PostCustomTTSReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  RunTtsRequest
    : public ModelBase
{
public:
    RunTtsRequest();
    virtual ~RunTtsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RunTtsRequest members

    /// <summary>
    /// 
    /// </summary>

    PostCustomTTSReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PostCustomTTSReq& value);


protected:
    PostCustomTTSReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunTtsRequest& dereference_from_shared_ptr(std::shared_ptr<RunTtsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RunTtsRequest_H_
