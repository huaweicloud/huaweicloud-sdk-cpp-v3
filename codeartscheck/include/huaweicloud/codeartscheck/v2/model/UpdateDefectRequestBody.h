
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateDefectRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateDefectRequestBody_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  UpdateDefectRequestBody
    : public ModelBase
{
public:
    UpdateDefectRequestBody();
    virtual ~UpdateDefectRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDefectRequestBody members

    /// <summary>
    /// 问题id,多个时英文逗号分隔
    /// </summary>

    std::string getDefectId() const;
    bool defectIdIsSet() const;
    void unsetdefectId();
    void setDefectId(const std::string& value);

    /// <summary>
    /// 状态2：已忽略 1：已解决 0：未解决
    /// </summary>

    std::string getDefectStatus() const;
    bool defectStatusIsSet() const;
    void unsetdefectStatus();
    void setDefectStatus(const std::string& value);


protected:
    std::string defectId_;
    bool defectIdIsSet_;
    std::string defectStatus_;
    bool defectStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateDefectRequestBody_H_
