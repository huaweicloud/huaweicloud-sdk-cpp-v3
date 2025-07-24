
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestVersionVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestVersionVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestVersionVo
    : public ModelBase
{
public:
    TestVersionVo();
    virtual ~TestVersionVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestVersionVo members

    /// <summary>
    /// 资源URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 级别
    /// </summary>

    int32_t getRank() const;
    bool rankIsSet() const;
    void unsetrank();
    void setRank(int32_t value);

    /// <summary>
    /// 待测版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 处理者ID
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 关联迭代
    /// </summary>

    std::string getIterations() const;
    bool iterationsIsSet() const;
    void unsetiterations();
    void setIterations(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 最后修改人
    /// </summary>

    std::string getLastModifier() const;
    bool lastModifierIsSet() const;
    void unsetlastModifier();
    void setLastModifier(const std::string& value);

    /// <summary>
    /// 最后修改时间
    /// </summary>

    utility::datetime getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const utility::datetime& value);

    /// <summary>
    /// 修改时间时间戳
    /// </summary>

    int64_t getLastModifiedTimestamp() const;
    bool lastModifiedTimestampIsSet() const;
    void unsetlastModifiedTimestamp();
    void setLastModifiedTimestamp(int64_t value);

    /// <summary>
    /// 最后变更时间
    /// </summary>

    utility::datetime getLastChangeTime() const;
    bool lastChangeTimeIsSet() const;
    void unsetlastChangeTime();
    void setLastChangeTime(const utility::datetime& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 源资源URI
    /// </summary>

    std::string getOriginUri() const;
    bool originUriIsSet() const;
    void unsetoriginUri();
    void setOriginUri(const std::string& value);

    /// <summary>
    /// 父资源URI
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 父资源路径
    /// </summary>

    std::string getParentPath() const;
    bool parentPathIsSet() const;
    void unsetparentPath();
    void setParentPath(const std::string& value);

    /// <summary>
    /// 创建版本URI
    /// </summary>

    std::string getCreationVersionUri() const;
    bool creationVersionUriIsSet() const;
    void unsetcreationVersionUri();
    void setCreationVersionUri(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const utility::datetime& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreationDateTimestamp() const;
    bool creationDateTimestampIsSet() const;
    void unsetcreationDateTimestamp();
    void setCreationDateTimestamp(int64_t value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 是否为Master分支
    /// </summary>

    int32_t getIsMaster() const;
    bool isMasterIsSet() const;
    void unsetisMaster();
    void setIsMaster(int32_t value);

    /// <summary>
    /// 是否为迭代
    /// </summary>

    int32_t getIsIterator() const;
    bool isIteratorIsSet() const;
    void unsetisIterator();
    void setIsIterator(int32_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    utility::datetime getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const utility::datetime& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    utility::datetime getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const utility::datetime& value);

    /// <summary>
    /// 微服务ID
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 微服务名
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// PBI ID
    /// </summary>

    std::string getPbiId() const;
    bool pbiIdIsSet() const;
    void unsetpbiId();
    void setPbiId(const std::string& value);

    /// <summary>
    /// PBI信息
    /// </summary>

    std::string getPbiName() const;
    bool pbiNameIsSet() const;
    void unsetpbiName();
    void setPbiName(const std::string& value);

    /// <summary>
    /// 计划ID
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 度量PBI ID
    /// </summary>

    std::string getMetricPbiIds() const;
    bool metricPbiIdsIsSet() const;
    void unsetmetricPbiIds();
    void setMetricPbiIds(const std::string& value);

    /// <summary>
    /// 度量PBI名称
    /// </summary>

    std::string getMetricPbiIdNames() const;
    bool metricPbiIdNamesIsSet() const;
    void unsetmetricPbiIdNames();
    void setMetricPbiIdNames(const std::string& value);

    /// <summary>
    /// 最后同步时间
    /// </summary>

    utility::datetime getLastSynDate() const;
    bool lastSynDateIsSet() const;
    void unsetlastSynDate();
    void setLastSynDate(const utility::datetime& value);

    /// <summary>
    /// 版本是否关闭
    /// </summary>

    std::string getIsClosed() const;
    bool isClosedIsSet() const;
    void unsetisClosed();
    void setIsClosed(const std::string& value);

    /// <summary>
    /// 是否同步git库
    /// </summary>

    std::string getAsynGit() const;
    bool asynGitIsSet() const;
    void unsetasynGit();
    void setAsynGit(const std::string& value);

    /// <summary>
    /// schema编号
    /// </summary>

    int32_t getSchemaNo() const;
    bool schemaNoIsSet() const;
    void unsetschemaNo();
    void setSchemaNo(int32_t value);

    /// <summary>
    /// 迭代实际完成时间
    /// </summary>

    utility::datetime getFinishDate() const;
    bool finishDateIsSet() const;
    void unsetfinishDate();
    void setFinishDate(const utility::datetime& value);

    /// <summary>
    /// 处理者名称
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 当前所处阶段
    /// </summary>

    std::string getCurrentStage() const;
    bool currentStageIsSet() const;
    void unsetcurrentStage();
    void setCurrentStage(const std::string& value);

    /// <summary>
    /// 服务类型
    /// </summary>

    std::string getServiceTypes() const;
    bool serviceTypesIsSet() const;
    void unsetserviceTypes();
    void setServiceTypes(const std::string& value);

    /// <summary>
    /// 风险等级
    /// </summary>

    int32_t getRiskRating() const;
    bool riskRatingIsSet() const;
    void unsetriskRating();
    void setRiskRating(int32_t value);

    /// <summary>
    /// 风险描述
    /// </summary>

    std::string getRiskDes() const;
    bool riskDesIsSet() const;
    void unsetriskDes();
    void setRiskDes(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// pi的id
    /// </summary>

    std::string getPiId() const;
    bool piIdIsSet() const;
    void unsetpiId();
    void setPiId(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string author_;
    bool authorIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t rank_;
    bool rankIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string iterations_;
    bool iterationsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string lastModifier_;
    bool lastModifierIsSet_;
    utility::datetime lastModified_;
    bool lastModifiedIsSet_;
    int64_t lastModifiedTimestamp_;
    bool lastModifiedTimestampIsSet_;
    utility::datetime lastChangeTime_;
    bool lastChangeTimeIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string originUri_;
    bool originUriIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string parentPath_;
    bool parentPathIsSet_;
    std::string creationVersionUri_;
    bool creationVersionUriIsSet_;
    utility::datetime creationDate_;
    bool creationDateIsSet_;
    int64_t creationDateTimestamp_;
    bool creationDateTimestampIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::string number_;
    bool numberIsSet_;
    int32_t isMaster_;
    bool isMasterIsSet_;
    int32_t isIterator_;
    bool isIteratorIsSet_;
    utility::datetime planStartDate_;
    bool planStartDateIsSet_;
    utility::datetime planEndDate_;
    bool planEndDateIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string pbiId_;
    bool pbiIdIsSet_;
    std::string pbiName_;
    bool pbiNameIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::string metricPbiIds_;
    bool metricPbiIdsIsSet_;
    std::string metricPbiIdNames_;
    bool metricPbiIdNamesIsSet_;
    utility::datetime lastSynDate_;
    bool lastSynDateIsSet_;
    std::string isClosed_;
    bool isClosedIsSet_;
    std::string asynGit_;
    bool asynGitIsSet_;
    int32_t schemaNo_;
    bool schemaNoIsSet_;
    utility::datetime finishDate_;
    bool finishDateIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string currentStage_;
    bool currentStageIsSet_;
    std::string serviceTypes_;
    bool serviceTypesIsSet_;
    int32_t riskRating_;
    bool riskRatingIsSet_;
    std::string riskDes_;
    bool riskDesIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string piId_;
    bool piIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestVersionVo_H_
