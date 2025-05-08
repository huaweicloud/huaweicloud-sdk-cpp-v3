
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateObjectReplicationRequestBody_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateObjectReplicationRequestBody_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// obs桶复制请求消息
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateObjectReplicationRequestBody
    : public ModelBase
{
public:
    CreateObjectReplicationRequestBody();
    virtual ~CreateObjectReplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateObjectReplicationRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getSrcInfo() const;
    bool srcInfoIsSet() const;
    void unsetsrcInfo();
    void setSrcInfo(const ObsInfo& value);

    /// <summary>
    /// 源文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getDestInfo() const;
    bool destInfoIsSet() const;
    void unsetdestInfo();
    void setDestInfo(const ObsInfo& value);

    /// <summary>
    /// 媒资分类id
    /// </summary>

    Object getCategoryId() const;
    bool categoryIdIsSet() const;
    void unsetcategoryId();
    void setCategoryId(const Object& value);

    /// <summary>
    /// 回调地址，为空则不回调
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
    ObsInfo srcInfo_;
    bool srcInfoIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    ObsInfo destInfo_;
    bool destInfoIsSet_;
    Object categoryId_;
    bool categoryIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateObjectReplicationRequestBody_H_
