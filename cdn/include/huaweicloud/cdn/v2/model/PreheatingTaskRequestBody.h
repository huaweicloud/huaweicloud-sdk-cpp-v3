
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_PreheatingTaskRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_PreheatingTaskRequestBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  PreheatingTaskRequestBody
    : public ModelBase
{
public:
    PreheatingTaskRequestBody();
    virtual ~PreheatingTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreheatingTaskRequestBody members

    /// <summary>
    /// 是否对url中的中文字符进行编码后预热，false代表不开启，true代表开启，开启后仅预热转码后的URL。
    /// </summary>

    bool isZhUrlEncode() const;
    bool zhUrlEncodeIsSet() const;
    void unsetzhUrlEncode();
    void setZhUrlEncode(bool value);

    /// <summary>
    /// 需要预热的URL必须带有“http://”或“https://”，多个URL用逗号分隔（\&quot;url1\&quot;, \&quot;url2\&quot;），目前不支持对目录的预热，单个url的长度限制为4096字符,单次最多输入1000个url。
    /// </summary>

    std::vector<std::string>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<std::string>& value);


protected:
    bool zhUrlEncode_;
    bool zhUrlEncodeIsSet_;
    std::vector<std::string> urls_;
    bool urlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_PreheatingTaskRequestBody_H_
