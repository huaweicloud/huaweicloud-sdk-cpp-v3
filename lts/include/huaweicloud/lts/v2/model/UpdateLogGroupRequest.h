
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogGroupRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogGroupRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/UpdateLogGroupParams.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateLogGroupRequest
    : public ModelBase
{
public:
    UpdateLogGroupRequest();
    virtual ~UpdateLogGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateLogGroupRequest members

    /// <summary>
    /// 日志组ID，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）
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

    UpdateLogGroupParams getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateLogGroupParams& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    UpdateLogGroupParams body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateLogGroupRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateLogGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogGroupRequest_H_
