
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BanUrlList_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BanUrlList_H_


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
/// 封禁url信息。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BanUrlList
    : public ModelBase
{
public:
    BanUrlList();
    virtual ~BanUrlList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BanUrlList members

    /// <summary>
    /// 封禁类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// url信息。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 创建时间戳（毫秒）。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间戳（毫秒）。
    /// </summary>

    int64_t getModifyTime() const;
    bool modifyTimeIsSet() const;
    void unsetmodifyTime();
    void setModifyTime(int64_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string url_;
    bool urlIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t modifyTime_;
    bool modifyTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BanUrlList_H_
