
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/Workitems.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListWorkitemsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkitemsResponse();
    virtual ~ListWorkitemsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkitemsResponse members

    /// <summary>
    /// 工作项
    /// </summary>

    std::vector<Workitems>& getWorkItems();
    bool workItemsIsSet() const;
    void unsetworkItems();
    void setWorkItems(const std::vector<Workitems>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<Workitems> workItems_;
    bool workItemsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemsResponse_H_
