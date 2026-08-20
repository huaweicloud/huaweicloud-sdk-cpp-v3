
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateThirdPartyAssociateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateThirdPartyAssociateVO_H_


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
/// 工作项更新外部链接时的参数对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateThirdPartyAssociateVO
    : public ModelBase
{
public:
    UpdateThirdPartyAssociateVO();
    virtual ~UpdateThirdPartyAssociateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateThirdPartyAssociateVO members

    /// <summary>
    /// 工作项下关联外部链接的名称。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 新关联外部链接时会创建一条数据，该数据的唯一标识ID，可以在查询外部链接接口以及关联外部链接接口响应体中找到。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateThirdPartyAssociateVO_H_
