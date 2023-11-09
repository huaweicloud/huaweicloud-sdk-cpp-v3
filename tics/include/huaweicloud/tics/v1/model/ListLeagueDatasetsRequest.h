
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ListLeagueDatasetsRequest_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ListLeagueDatasetsRequest_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ListLeagueDatasetsRequest
    : public ModelBase
{
public:
    ListLeagueDatasetsRequest();
    virtual ~ListLeagueDatasetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLeagueDatasetsRequest members

    /// <summary>
    /// 联盟id，最大32位，字母和数字组成
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 记录数偏移量 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页记录数，取值0-100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 数据集名称
    /// </summary>

    std::string getDatasetName() const;
    bool datasetNameIsSet() const;
    void unsetdatasetName();
    void setDatasetName(const std::string& value);

    /// <summary>
    /// partner_name
    /// </summary>

    std::string getPartnerName() const;
    bool partnerNameIsSet() const;
    void unsetpartnerName();
    void setPartnerName(const std::string& value);


protected:
    std::string leagueId_;
    bool leagueIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string datasetName_;
    bool datasetNameIsSet_;
    std::string partnerName_;
    bool partnerNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListLeagueDatasetsRequest& dereference_from_shared_ptr(std::shared_ptr<ListLeagueDatasetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ListLeagueDatasetsRequest_H_
