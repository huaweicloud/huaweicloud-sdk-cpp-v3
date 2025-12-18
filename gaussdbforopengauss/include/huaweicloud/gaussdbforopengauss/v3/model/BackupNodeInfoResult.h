
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BackupNodeInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BackupNodeInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BackupNodeInfoResult
    : public ModelBase
{
public:
    BackupNodeInfoResult();
    virtual ~BackupNodeInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupNodeInfoResult members

    /// <summary>
    /// **参数解释**: 选择指定az下的节点进行备份。 **取值范围**: 不涉及。
    /// </summary>

    std::string getAzList() const;
    bool azListIsSet() const;
    void unsetazList();
    void setAzList(const std::string& value);

    /// <summary>
    /// **参数解释**: 选择指定节点进行备份。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeList() const;
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::string& value);


protected:
    std::string azList_;
    bool azListIsSet_;
    std::string nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BackupNodeInfoResult_H_
