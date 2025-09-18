
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/projectman/v4/model/ListSpecIssueStayTimesResponseBody_data.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListSpecIssueStayTimesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSpecIssueStayTimesResponse();
    virtual ~ListSpecIssueStayTimesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSpecIssueStayTimesResponse members

    /// <summary>
    /// 计算失败的工作项id,一般指未关闭的工作项
    /// </summary>

    std::vector<std::string>& getFails();
    bool failsIsSet() const;
    void unsetfails();
    void setFails(const std::vector<std::string>& value);

    /// <summary>
    /// 工作项时间数据（创建时间-关闭时间）
    /// </summary>

    std::vector<ListSpecIssueStayTimesResponseBody_data>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<ListSpecIssueStayTimesResponseBody_data>& value);

    /// <summary>
    /// 停留时间求和（单位：秒）
    /// </summary>

    int64_t getTotalStayTime() const;
    bool totalStayTimeIsSet() const;
    void unsettotalStayTime();
    void setTotalStayTime(int64_t value);

    /// <summary>
    /// 停留时间求和的工作项个数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<std::string> fails_;
    bool failsIsSet_;
    std::vector<ListSpecIssueStayTimesResponseBody_data> data_;
    bool dataIsSet_;
    int64_t totalStayTime_;
    bool totalStayTimeIsSet_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesResponse_H_
