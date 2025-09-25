
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoDailyCodeline_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoDailyCodeline_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  RepoDailyCodeline
    : public ModelBase
{
public:
    RepoDailyCodeline();
    virtual ~RepoDailyCodeline();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoDailyCodeline members

    /// <summary>
    /// 每日增加代码行
    /// </summary>

    int32_t getAdditions() const;
    bool additionsIsSet() const;
    void unsetadditions();
    void setAdditions(int32_t value);

    /// <summary>
    /// 日期
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// 每日删除代码行
    /// </summary>

    int32_t getDeletions() const;
    bool deletionsIsSet() const;
    void unsetdeletions();
    void setDeletions(int32_t value);


protected:
    int32_t additions_;
    bool additionsIsSet_;
    std::string date_;
    bool dateIsSet_;
    int32_t deletions_;
    bool deletionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoDailyCodeline_H_
