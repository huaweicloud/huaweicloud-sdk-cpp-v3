
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/UpdateLogStreamParams.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateLogStreamRequest
    : public ModelBase
{
public:
    UpdateLogStreamRequest();
    virtual ~UpdateLogStreamRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogStreamRequest members

    /// <summary>
    /// 日志组ID，获取方式请参见：获取帐号ID、项目ID、日志组ID、日志流ID。  缺省值：None 最小长度：36 最大长度：36
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID，获取方式请参见：获取帐号ID、项目ID、日志组ID、日志流ID。  缺省值：None 最小长度：36 最大长度：36
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。  缺省值：None 最小长度：30 最大长度：30
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateLogStreamParams getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateLogStreamParams& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    UpdateLogStreamParams body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateLogStreamRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateLogStreamRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamRequest_H_
