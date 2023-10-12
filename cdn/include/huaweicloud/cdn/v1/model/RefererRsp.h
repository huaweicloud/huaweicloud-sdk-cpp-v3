
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_RefererRsp_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_RefererRsp_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  RefererRsp
    : public ModelBase
{
public:
    RefererRsp();
    virtual ~RefererRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RefererRsp members

    /// <summary>
    /// Referer类型。取值：0代表不设置Referer过滤；1代表黑名单；2代表白名单。默认取值为0。
    /// </summary>

    int32_t getRefererType() const;
    bool refererTypeIsSet() const;
    void unsetrefererType();
    void setRefererType(int32_t value);

    /// <summary>
    /// ：配置的referer地址。
    /// </summary>

    std::string getRefererList() const;
    bool refererListIsSet() const;
    void unsetrefererList();
    void setRefererList(const std::string& value);

    /// <summary>
    /// 是否包含空Referer。如果是黑名单并开启该选项，则表示无referer不允许访问。如果是白名单并开启该选项，则表示无referer允许访问。默认不包含,true：包含，false：不包含。
    /// </summary>

    bool isIncludeEmpty() const;
    bool includeEmptyIsSet() const;
    void unsetincludeEmpty();
    void setIncludeEmpty(bool value);


protected:
    int32_t refererType_;
    bool refererTypeIsSet_;
    std::string refererList_;
    bool refererListIsSet_;
    bool includeEmpty_;
    bool includeEmptyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_RefererRsp_H_
