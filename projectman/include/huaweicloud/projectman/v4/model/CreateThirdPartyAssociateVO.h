
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateThirdPartyAssociateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateThirdPartyAssociateVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 新增关联外部链接参数。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateThirdPartyAssociateVO
    : public ModelBase
{
public:
    CreateThirdPartyAssociateVO();
    virtual ~CreateThirdPartyAssociateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateThirdPartyAssociateVO members

    /// <summary>
    /// 工作项下对应的外部链接的名称。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项下对应外部链接的地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateThirdPartyAssociateVO_H_
