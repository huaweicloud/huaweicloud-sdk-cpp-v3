
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssociateDefectInfoVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssociateDefectInfoVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联缺陷信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AssociateDefectInfoVo
    : public ModelBase
{
public:
    AssociateDefectInfoVo();
    virtual ~AssociateDefectInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateDefectInfoVo members

    /// <summary>
    /// 是否已关联
    /// </summary>

    bool isAssociate() const;
    bool associateIsSet() const;
    void unsetassociate();
    void setAssociate(bool value);

    /// <summary>
    /// 关联缺陷数
    /// </summary>

    int32_t getAssociateCount() const;
    bool associateCountIsSet() const;
    void unsetassociateCount();
    void setAssociateCount(int32_t value);


protected:
    bool associate_;
    bool associateIsSet_;
    int32_t associateCount_;
    bool associateCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssociateDefectInfoVo_H_
