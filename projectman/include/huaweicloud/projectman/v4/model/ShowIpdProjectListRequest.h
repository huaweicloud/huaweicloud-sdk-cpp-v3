
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProjectListRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProjectListRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIpdProjectListRequest
    : public ModelBase
{
public:
    ShowIpdProjectListRequest();
    virtual ~ShowIpdProjectListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpdProjectListRequest members

    /// <summary>
    /// **参数解释**： 项目名称搜索关键字。 **约束限制**： 最大256个字符。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释**： IPD项目模型id。 **约束限制**： 不涉及 **取值范围**： 10001（系统设备类） 10002（独立软件类） 10003（云服务类型） **默认取值**： 不涉及
    /// </summary>

    std::string getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const std::string& value);


protected:
    std::string search_;
    bool searchIsSet_;
    std::string model_;
    bool modelIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIpdProjectListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowIpdProjectListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProjectListRequest_H_
