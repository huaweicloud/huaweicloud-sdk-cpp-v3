
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIterationHistoriesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIterationHistoriesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IterationHistory.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIterationHistoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIterationHistoriesResponse();
    virtual ~ListIterationHistoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIterationHistoriesResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 历史记录
    /// </summary>

    std::vector<IterationHistory>& getHistories();
    bool historiesIsSet() const;
    void unsethistories();
    void setHistories(const std::vector<IterationHistory>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<IterationHistory> histories_;
    bool historiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIterationHistoriesResponse_H_
