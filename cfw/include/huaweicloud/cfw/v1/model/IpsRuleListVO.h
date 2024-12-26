
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleListVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleListVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cfw/v1/model/IpsRuleVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsRuleListVO
    : public ModelBase
{
public:
    IpsRuleListVO();
    virtual ~IpsRuleListVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsRuleListVO members

    /// <summary>
    /// 
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<IpsRuleVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<IpsRuleVO>& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<IpsRuleVO> records_;
    bool recordsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleListVO_H_
