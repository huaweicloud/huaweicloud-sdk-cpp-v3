
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RefreshTaskRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RefreshTaskRequestBody_H_


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
class HUAWEICLOUD_CDN_V2_EXPORT  RefreshTaskRequestBody
    : public ModelBase
{
public:
    RefreshTaskRequestBody();
    virtual ~RefreshTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RefreshTaskRequestBody members

    /// <summary>
    /// 刷新的类型，其值可以为file：文件，或directory：目录，默认为file。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 目录刷新方式，all：刷新目录下全部资源；detect_modify_refresh：刷新目录下已变更的资源，默认值为all。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 是否对url中的中文字符进行编码后刷新，false代表不开启，true代表开启，开启后仅刷新转码后的URL。
    /// </summary>

    bool isZhUrlEncode() const;
    bool zhUrlEncodeIsSet() const;
    void unsetzhUrlEncode();
    void setZhUrlEncode(bool value);

    /// <summary>
    /// 需要刷新的URL必须带有“http://”或“https://”，多个URL用逗号分隔，单个url的长度限制为4096字符，单次最多输入1000个url，如果输入的是目录，支持100个目录刷新。  &gt;   如果您需要刷新的URL中有中文，请同时刷新中文URL和转码后的URL。 
    /// </summary>

    std::vector<std::string>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string mode_;
    bool modeIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RefreshTaskRequestBody_H_
