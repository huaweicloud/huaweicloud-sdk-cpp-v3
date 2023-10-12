
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateLogDumpObsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogDumpObsRequest
    : public ModelBase
{
public:
    CreateLogDumpObsRequest();
    virtual ~CreateLogDumpObsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLogDumpObsRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateLogDumpObsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateLogDumpObsRequestBody& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    CreateLogDumpObsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateLogDumpObsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateLogDumpObsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsRequest_H_
