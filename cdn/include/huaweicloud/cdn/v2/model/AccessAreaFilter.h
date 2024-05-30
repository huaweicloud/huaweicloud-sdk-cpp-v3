
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessAreaFilter_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessAreaFilter_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 区域访问控制。   &gt; - 使用该功能需要提交工单开通区域访问控制功能。   &gt; - CDN会定期更新IP地址库，部分未在地址库的IP将无法识别到所属位置。如果CDN无法识别用户所在位置，将采取放行策略，返回对应的资源给用户。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  AccessAreaFilter
    : public ModelBase
{
public:
    AccessAreaFilter();
    virtual ~AccessAreaFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessAreaFilter members

    /// <summary>
    /// 规则类型，黑、白名单二选一。   - black: 黑名单，如果匹配到黑名单规则，则黑名单所选区域内的用户将无法访问当前资源，返回403状态码。   - white: 白名单，白名单所选区域以外的用户均无法访问当前资源，返回403状态码。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 生效类型。   - all: 所有文件，所有文件均遵循配置的规则。   - file_directory: 目录路径，指定目录路径的资源遵循配置的规则。   - file_path: 全路径，指定路径的资源遵循配置的规则。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 生效规则。当content_type为all时，为空或不传。 当content_type为file_directory时，输入要求以“/”作为首字符，多个目录以“,”进行分隔，如/test/folder01,/test/folder02，并且输入的目录路径总数不超过100个。 当content_type为file_path时，输入要求以“/”或“\\*”作为首字符，支持配置通配符“\\*”，通配符不能连续出现且不能超过两个。多个路径以“,”进行分割，如/test/a.txt,/test/b.txt，并且输出的总数不能超过100个。   &gt; - 不允许配置两条完全一样的白名单或黑名单规则。   &gt; - 仅允许配置一条生效类型为“所有文件”的规则。
    /// </summary>

    std::string getContentValue() const;
    bool contentValueIsSet() const;
    void unsetcontentValue();
    void setContentValue(const std::string& value);

    /// <summary>
    /// 配置规则适用的区域，多个区域以“,”进行分隔，支持的区域如：CN_IN：中国大陆，AF：阿富汗，IE：爱尔兰，EG：埃及，AU：澳大利亚等。具体的位置编码参见《附录-地理位置编码》查询。
    /// </summary>

    std::string getArea() const;
    bool areaIsSet() const;
    void unsetarea();
    void setArea(const std::string& value);

    /// <summary>
    /// 例外IP，配置指定IP不执行当前规则。
    /// </summary>

    std::string getExceptionIp() const;
    bool exceptionIpIsSet() const;
    void unsetexceptionIp();
    void setExceptionIp(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string contentValue_;
    bool contentValueIsSet_;
    std::string area_;
    bool areaIsSet_;
    std::string exceptionIp_;
    bool exceptionIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessAreaFilter_H_
