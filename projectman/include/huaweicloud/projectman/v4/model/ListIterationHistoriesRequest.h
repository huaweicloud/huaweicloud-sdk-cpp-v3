
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIterationHistoriesRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIterationHistoriesRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIterationHistoriesRequest
    : public ModelBase
{
public:
    ListIterationHistoriesRequest();
    virtual ~ListIterationHistoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIterationHistoriesRequest members

    /// <summary>
    /// 迭代id
    /// </summary>

    int32_t getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(int32_t value);

    /// <summary>
    /// 偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页数量，最大为100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    int32_t iterationId_;
    bool iterationIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIterationHistoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListIterationHistoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIterationHistoriesRequest_H_
