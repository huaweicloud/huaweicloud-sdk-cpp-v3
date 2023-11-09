
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_LeagueDatasetStatisticsVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_LeagueDatasetStatisticsVo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  LeagueDatasetStatisticsVo
    : public ModelBase
{
public:
    LeagueDatasetStatisticsVo();
    virtual ~LeagueDatasetStatisticsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LeagueDatasetStatisticsVo members

    /// <summary>
    /// 参与方别名
    /// </summary>

    std::string getDatasetDomainAlias() const;
    bool datasetDomainAliasIsSet() const;
    void unsetdatasetDomainAlias();
    void setDatasetDomainAlias(const std::string& value);

    /// <summary>
    /// 参与方租户名称
    /// </summary>

    std::string getDatasetDomainName() const;
    bool datasetDomainNameIsSet() const;
    void unsetdatasetDomainName();
    void setDatasetDomainName(const std::string& value);

    /// <summary>
    /// 数据集id
    /// </summary>

    std::string getDatasetId() const;
    bool datasetIdIsSet() const;
    void unsetdatasetId();
    void setDatasetId(const std::string& value);

    /// <summary>
    /// 数据集拦截次数
    /// </summary>

    int64_t getDatasetInterceptCnt() const;
    bool datasetInterceptCntIsSet() const;
    void unsetdatasetInterceptCnt();
    void setDatasetInterceptCnt(int64_t value);

    /// <summary>
    /// 数据集名称
    /// </summary>

    std::string getDatasetName() const;
    bool datasetNameIsSet() const;
    void unsetdatasetName();
    void setDatasetName(const std::string& value);

    /// <summary>
    /// 数据集使用次数
    /// </summary>

    int64_t getDatasetUseCnt() const;
    bool datasetUseCntIsSet() const;
    void unsetdatasetUseCnt();
    void setDatasetUseCnt(int64_t value);


protected:
    std::string datasetDomainAlias_;
    bool datasetDomainAliasIsSet_;
    std::string datasetDomainName_;
    bool datasetDomainNameIsSet_;
    std::string datasetId_;
    bool datasetIdIsSet_;
    int64_t datasetInterceptCnt_;
    bool datasetInterceptCntIsSet_;
    std::string datasetName_;
    bool datasetNameIsSet_;
    int64_t datasetUseCnt_;
    bool datasetUseCntIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_LeagueDatasetStatisticsVo_H_
