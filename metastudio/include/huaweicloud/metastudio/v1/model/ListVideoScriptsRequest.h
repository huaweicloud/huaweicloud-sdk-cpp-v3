
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVideoScriptsRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVideoScriptsRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListVideoScriptsRequest
    : public ModelBase
{
public:
    ListVideoScriptsRequest();
    virtual ~ListVideoScriptsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVideoScriptsRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。  格式为(YYYYMMDD&#39;T&#39;HHMMSS&#39;Z&#39;)。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 按名称模糊查询。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 剧本类型。默认查询VIDEO_DRAFT。 * VIDEO_DRAFT：视频草稿。 * SYSTEM_VIDEO_TEMPLET： 系统视频模板。
    /// </summary>

    std::string getScriptCatalog() const;
    bool scriptCatalogIsSet() const;
    void unsetscriptCatalog();
    void setScriptCatalog(const std::string& value);

    /// <summary>
    /// 横竖屏类型（内部参数，不对外开放）。默认值是LANDSCAPE。 * LANDSCAPE：横屏。 * VERTICAL：竖屏。
    /// </summary>

    std::string getViewMode() const;
    bool viewModeIsSet() const;
    void unsetviewMode();
    void setViewMode(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string scriptCatalog_;
    bool scriptCatalogIsSet_;
    std::string viewMode_;
    bool viewModeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVideoScriptsRequest& dereference_from_shared_ptr(std::shared_ptr<ListVideoScriptsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVideoScriptsRequest_H_
