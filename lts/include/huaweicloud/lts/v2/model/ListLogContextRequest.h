
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/ListLogContextRequestBody.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogContextRequest
    : public ModelBase
{
public:
    ListLogContextRequest();
    virtual ~ListLogContextRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogContextRequest members

    /// <summary>
    /// 日志组ID，获取方式请参见：[获取项目ID，获取账号ID，日志组ID、日志流ID](lts_api_0006.xml)
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID，获取方式请参见：[获取项目ID，获取账号ID，日志组ID、日志流ID](lts_api_0006.xml)
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

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

    ListLogContextRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListLogContextRequestBody& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    ListLogContextRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListLogContextRequest& dereference_from_shared_ptr(std::shared_ptr<ListLogContextRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextRequest_H_
