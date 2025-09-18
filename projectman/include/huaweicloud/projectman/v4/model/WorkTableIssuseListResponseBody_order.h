
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_order_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_order_H_


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
/// 优先级顺序信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkTableIssuseListResponseBody_order
    : public ModelBase
{
public:
    WorkTableIssuseListResponseBody_order();
    virtual ~WorkTableIssuseListResponseBody_order();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkTableIssuseListResponseBody_order members

    /// <summary>
    /// 优先级顺序id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 优先级顺序名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_order_H_
