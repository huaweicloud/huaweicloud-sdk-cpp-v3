
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIterationsV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIterationsV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/ListProjectVersionsV4ResponseBody_iterations.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectIterationsV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListProjectIterationsV4Response();
    virtual ~ListProjectIterationsV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectIterationsV4Response members

    /// <summary>
    /// 迭代总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 迭代信息
    /// </summary>

    std::vector<ListProjectVersionsV4ResponseBody_iterations>& getIterations();
    bool iterationsIsSet() const;
    void unsetiterations();
    void setIterations(const std::vector<ListProjectVersionsV4ResponseBody_iterations>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ListProjectVersionsV4ResponseBody_iterations> iterations_;
    bool iterationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIterationsV4Response_H_
