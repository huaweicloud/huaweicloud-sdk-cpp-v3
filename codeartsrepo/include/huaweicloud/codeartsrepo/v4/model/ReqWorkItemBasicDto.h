
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqWorkItemBasicDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqWorkItemBasicDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 工作项基础对象，用于记录工作项的状态、类型等属性的ID和名称。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ReqWorkItemBasicDto
    : public ModelBase
{
public:
    ReqWorkItemBasicDto();
    virtual ~ReqWorkItemBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqWorkItemBasicDto members

    /// <summary>
    /// **参数解释：** 属性ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 属性名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqWorkItemBasicDto_H_
