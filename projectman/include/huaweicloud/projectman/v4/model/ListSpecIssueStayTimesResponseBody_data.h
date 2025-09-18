
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesResponseBody_data_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesResponseBody_data_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListSpecIssueStayTimesResponseBody_data
    : public ModelBase
{
public:
    ListSpecIssueStayTimesResponseBody_data();
    virtual ~ListSpecIssueStayTimesResponseBody_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSpecIssueStayTimesResponseBody_data members

    /// <summary>
    /// 工作项id字符串
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 停留时间（单位：秒）
    /// </summary>

    int64_t getStayTime() const;
    bool stayTimeIsSet() const;
    void unsetstayTime();
    void setStayTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int64_t stayTime_;
    bool stayTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesResponseBody_data_H_
