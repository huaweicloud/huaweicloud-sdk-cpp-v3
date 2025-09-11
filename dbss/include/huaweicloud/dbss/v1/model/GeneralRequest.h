
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_GeneralRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_GeneralRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/Duration.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  GeneralRequest
    : public ModelBase
{
public:
    GeneralRequest();
    virtual ~GeneralRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralRequest members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 是否重新生成  - 1：是  - 0：否
    /// </summary>

    int32_t getRegenerate() const;
    bool regenerateIsSet() const;
    void unsetregenerate();
    void setRegenerate(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Duration getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const Duration& value);


protected:
    std::string dbId_;
    bool dbIdIsSet_;
    int32_t regenerate_;
    bool regenerateIsSet_;
    Duration time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_GeneralRequest_H_
