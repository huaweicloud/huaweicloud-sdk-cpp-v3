
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadByUrlReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadByUrlReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UploadByUrlReq
    : public ModelBase
{
public:
    UploadByUrlReq();
    virtual ~UploadByUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadByUrlReq members

    /// <summary>
    /// OBS的bucket名称。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 文件的存储路径。
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 视频源文件URL&lt;/br&gt; 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 视频类型&lt;br/&gt; 
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 媒资标题&lt;/br&gt; 
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 回调url 
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 自定义上下文，回调时会回调给用户，透传信息
    /// </summary>

    std::string getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string object_;
    bool objectIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string sessionContext_;
    bool sessionContextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadByUrlReq_H_
