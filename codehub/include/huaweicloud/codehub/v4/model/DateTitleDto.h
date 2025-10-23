
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DateTitleDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DateTitleDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DateTitleDto
    : public ModelBase
{
public:
    DateTitleDto();
    virtual ~DateTitleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DateTitleDto members

    /// <summary>
    /// 时间（天）
    /// </summary>

    std::string getDay() const;
    bool dayIsSet() const;
    void unsetday();
    void setDay(const std::string& value);

    /// <summary>
    /// 提交数量
    /// </summary>

    int32_t getCommitsCount() const;
    bool commitsCountIsSet() const;
    void unsetcommitsCount();
    void setCommitsCount(int32_t value);


protected:
    std::string day_;
    bool dayIsSet_;
    int32_t commitsCount_;
    bool commitsCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DateTitleDto_H_
