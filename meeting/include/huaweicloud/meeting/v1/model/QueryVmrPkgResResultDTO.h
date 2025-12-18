
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVmrPkgResResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVmrPkgResResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询Vmr套餐包分配数量结果。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryVmrPkgResResultDTO
    : public ModelBase
{
public:
    QueryVmrPkgResResultDTO();
    virtual ~QueryVmrPkgResResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryVmrPkgResResultDTO members

    /// <summary>
    /// 云会议室套餐包id。
    /// </summary>

    std::string getVmrPkgId() const;
    bool vmrPkgIdIsSet() const;
    void unsetvmrPkgId();
    void setVmrPkgId(const std::string& value);

    /// <summary>
    /// 云会议室套餐包名称。
    /// </summary>

    std::string getVmrName() const;
    bool vmrNameIsSet() const;
    void unsetvmrName();
    void setVmrName(const std::string& value);

    /// <summary>
    /// 云会议室套餐方数。
    /// </summary>

    int32_t getVmrPkgParties() const;
    bool vmrPkgPartiesIsSet() const;
    void unsetvmrPkgParties();
    void setVmrPkgParties(int32_t value);

    /// <summary>
    /// 该云会议室套餐分配的总数。
    /// </summary>

    int32_t getVmrPkgCount() const;
    bool vmrPkgCountIsSet() const;
    void unsetvmrPkgCount();
    void setVmrPkgCount(int32_t value);

    /// <summary>
    /// 该套餐对应的云会议室已分配数量。
    /// </summary>

    int32_t getVmrPkgUsedCount() const;
    bool vmrPkgUsedCountIsSet() const;
    void unsetvmrPkgUsedCount();
    void setVmrPkgUsedCount(int32_t value);


protected:
    std::string vmrPkgId_;
    bool vmrPkgIdIsSet_;
    std::string vmrName_;
    bool vmrNameIsSet_;
    int32_t vmrPkgParties_;
    bool vmrPkgPartiesIsSet_;
    int32_t vmrPkgCount_;
    bool vmrPkgCountIsSet_;
    int32_t vmrPkgUsedCount_;
    bool vmrPkgUsedCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVmrPkgResResultDTO_H_
