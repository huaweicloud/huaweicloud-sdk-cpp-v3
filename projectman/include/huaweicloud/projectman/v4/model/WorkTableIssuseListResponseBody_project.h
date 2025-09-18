
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_project_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_project_H_


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
/// 项目信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkTableIssuseListResponseBody_project
    : public ModelBase
{
public:
    WorkTableIssuseListResponseBody_project();
    virtual ~WorkTableIssuseListResponseBody_project();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkTableIssuseListResponseBody_project members

    /// <summary>
    /// 项目id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string identifier_;
    bool identifierIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_project_H_
