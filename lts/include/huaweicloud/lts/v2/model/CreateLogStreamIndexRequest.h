
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamIndexRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamIndexRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LTSIndexConfigInfo.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogStreamIndexRequest
    : public ModelBase
{
public:
    CreateLogStreamIndexRequest();
    virtual ~CreateLogStreamIndexRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLogStreamIndexRequest members

    /// <summary>
    /// &#39;项目ID，账号ID，日志组ID、日志流ID，获取方式请参见：获取项目ID，获取账号ID，日志组ID、日志流ID&#39;
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// &#39;项目ID，账号ID，日志组ID、日志流ID，获取方式请参见：获取项目ID，获取账号ID，日志组ID、日志流ID&#39;
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LTSIndexConfigInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LTSIndexConfigInfo& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    LTSIndexConfigInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateLogStreamIndexRequest& dereference_from_shared_ptr(std::shared_ptr<CreateLogStreamIndexRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamIndexRequest_H_
