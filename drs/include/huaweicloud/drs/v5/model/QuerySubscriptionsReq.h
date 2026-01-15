
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QuerySubscriptionsReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QuerySubscriptionsReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询订阅任务列表请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QuerySubscriptionsReq
    : public ModelBase
{
public:
    QuerySubscriptionsReq();
    virtual ~QuerySubscriptionsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuerySubscriptionsReq members

    /// <summary>
    /// 任务场景
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 引擎类型。
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 网络类型。
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 任务ID或名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 企业项目ID。 缺省值：\&quot;\&quot;，表示查询所有企业项目任务。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 返回结果按该关键字排序，默认为“create_time”。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 降序或升序（分别对应desc和asc，默认为“desc”）。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 数据库实例ID列表，最多支持10个。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 数据库实例IP
    /// </summary>

    std::string getInstanceIp() const;
    bool instanceIpIsSet() const;
    void unsetinstanceIp();
    void setInstanceIp(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 服务名称
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 计费模式，包括是、否以及全部三种情况，不填默认为全部
    /// </summary>

    bool isIsBilling() const;
    bool isBillingIsSet() const;
    void unsetisBilling();
    void setIsBilling(bool value);

    /// <summary>
    /// 消费时间
    /// </summary>

    std::string getBeginAt() const;
    bool beginAtIsSet() const;
    void unsetbeginAt();
    void setBeginAt(const std::string& value);


protected:
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    std::string instanceIp_;
    bool instanceIpIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isBilling_;
    bool isBillingIsSet_;
    std::string beginAt_;
    bool beginAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QuerySubscriptionsReq_H_
