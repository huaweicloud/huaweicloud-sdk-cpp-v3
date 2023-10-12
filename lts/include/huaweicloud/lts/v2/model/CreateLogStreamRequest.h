
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateLogStreamParams.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogStreamRequest
    : public ModelBase
{
public:
    CreateLogStreamRequest();
    virtual ~CreateLogStreamRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLogStreamRequest members

    /// <summary>
    /// 租户想创建的日志流所在的日志组的groupid，一般为36位字符串。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

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

    CreateLogStreamParams getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateLogStreamParams& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    CreateLogStreamParams body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateLogStreamRequest& dereference_from_shared_ptr(std::shared_ptr<CreateLogStreamRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamRequest_H_
