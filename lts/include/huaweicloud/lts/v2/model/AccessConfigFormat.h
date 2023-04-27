
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormat_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormat_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigFormatSingle.h>
#include <huaweicloud/lts/v2/model/AccessConfigFormatMutil.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志格式
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigFormat
    : public ModelBase
{
public:
    AccessConfigFormat();
    virtual ~AccessConfigFormat();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AccessConfigFormat members

    /// <summary>
    /// 
    /// </summary>

    AccessConfigFormatSingle getSingle() const;
    bool singleIsSet() const;
    void unsetsingle();
    void setSingle(const AccessConfigFormatSingle& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigFormatMutil getMulti() const;
    bool multiIsSet() const;
    void unsetmulti();
    void setMulti(const AccessConfigFormatMutil& value);


protected:
    AccessConfigFormatSingle single_;
    bool singleIsSet_;
    AccessConfigFormatMutil multi_;
    bool multiIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormat_H_
