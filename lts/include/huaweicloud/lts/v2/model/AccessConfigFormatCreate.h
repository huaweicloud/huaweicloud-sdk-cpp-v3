
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormatCreate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormatCreate_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigFormatMutilCreate.h>
#include <huaweicloud/lts/v2/model/AccessConfigFormatSingleCreate.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigFormatCreate
    : public ModelBase
{
public:
    AccessConfigFormatCreate();
    virtual ~AccessConfigFormatCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessConfigFormatCreate members

    /// <summary>
    /// 
    /// </summary>

    AccessConfigFormatSingleCreate getSingle() const;
    bool singleIsSet() const;
    void unsetsingle();
    void setSingle(const AccessConfigFormatSingleCreate& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigFormatMutilCreate getMulti() const;
    bool multiIsSet() const;
    void unsetmulti();
    void setMulti(const AccessConfigFormatMutilCreate& value);


protected:
    AccessConfigFormatSingleCreate single_;
    bool singleIsSet_;
    AccessConfigFormatMutilCreate multi_;
    bool multiIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormatCreate_H_
