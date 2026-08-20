
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteThirdPartyAssociateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteThirdPartyAssociateVO_H_


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
/// 工作项删除外部链接时的参数对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DeleteThirdPartyAssociateVO
    : public ModelBase
{
public:
    DeleteThirdPartyAssociateVO();
    virtual ~DeleteThirdPartyAssociateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteThirdPartyAssociateVO members

    /// <summary>
    /// 新关联外部链接时会创建一条数据，该数据的唯一标识ID，可以在查询外部链接接口以及关联外部链接接口响应体中找到。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteThirdPartyAssociateVO_H_
