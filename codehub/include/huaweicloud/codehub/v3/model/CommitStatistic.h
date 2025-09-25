
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CommitStatistic_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CommitStatistic_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  CommitStatistic
    : public ModelBase
{
public:
    CommitStatistic();
    virtual ~CommitStatistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitStatistic members

    /// <summary>
    /// 增加的行数
    /// </summary>

    int32_t getAdditions() const;
    bool additionsIsSet() const;
    void unsetadditions();
    void setAdditions(int32_t value);

    /// <summary>
    /// 删除的行数
    /// </summary>

    int32_t getDeletions() const;
    bool deletionsIsSet() const;
    void unsetdeletions();
    void setDeletions(int32_t value);


protected:
    int32_t additions_;
    bool additionsIsSet_;
    int32_t deletions_;
    bool deletionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CommitStatistic_H_
