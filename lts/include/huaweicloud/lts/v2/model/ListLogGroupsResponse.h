
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogGroupsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogGroupsResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LogGroup.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogGroupsResponse();
    virtual ~ListLogGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListLogGroupsResponse members

    /// <summary>
    /// 日志组信息。
    /// </summary>

    std::vector<LogGroup>& getLogGroups();
    bool logGroupsIsSet() const;
    void unsetlogGroups();
    void setLogGroups(const std::vector<LogGroup>& value);


protected:
    std::vector<LogGroup> logGroups_;
    bool logGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogGroupsResponse_H_
