
#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForBatchDeleteTrashes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForBatchRestoreRepo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForCreateArtifactory() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForCreateAttention() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForCreateDockerRepositories() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForCreateMavenRepo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForCreateProjectRelatedRepository() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForDeleteArtifactFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForDeleteCompletelyUpdateFileState() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForDeleteRepository() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListAllRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Qname")
                  .withJsonTag("qname")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Format")
                  .withJsonTag("format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FormatList")
                  .withJsonTag("format_list")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsRecycleBin")
                  .withJsonTag("is_recycle_bin")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsNeedPaging")
                  .withJsonTag("is_need_paging")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InProject")
                  .withJsonTag("in_project")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListArtifactoryComponent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Format")
                  .withJsonTag("format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListArtifactoryStorageStatistic() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Repo")
                  .withJsonTag("repo")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListAttentions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListCapacityMessageSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListChildProxyRepositoriesList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RepoId")
                  .withJsonTag("repo_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListDomainIpConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListFileBuildArchives() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ParentId")
                  .withJsonTag("parent_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BuildId")
                  .withJsonTag("build_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BuildNo")
                  .withJsonTag("build_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepoBranch")
                  .withJsonTag("repo_branch")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListFiles() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListLatestVersionFiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListMavenList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Default")
                  .withJsonTag("default")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Policy")
                  .withJsonTag("policy")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepoIds")
                  .withJsonTag("repo_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Access")
                  .withJsonTag("access")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListMavenUser() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserName")
                  .withJsonTag("user_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListNetProxy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListProjectRolePermissions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListProjectUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RepoId")
                  .withJsonTag("repo_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Scene")
                  .withJsonTag("scene")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListSecGuardList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Date")
                  .withJsonTag("date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForListUserPrivileges() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForModifyRepository() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForResetUserPassword() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForSearchArtifacts() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForSearchByChecksum() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Checksum")
                  .withJsonTag("checksum")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Format")
                  .withJsonTag("format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InProject")
                  .withJsonTag("in_project")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowAudit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserId")
                  .withJsonTag("user_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowAutoDeleteJobSettings() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowDomainReleaseRepoStorage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowFileDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowFileDetailByFullName() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowFileTree() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsRecycleBin")
                  .withJsonTag("is_recycle_bin")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowLatestVersionFilesCount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowMavenInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Policy")
                  .withJsonTag("policy")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Access")
                  .withJsonTag("access")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Default")
                  .withJsonTag("default")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ids")
                  .withJsonTag("ids")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowMultiRolesUserPermissions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowOpenSourceEnabled() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowPackageDataDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowPackageInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowProjectList() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowProjectRelatedRepository() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SearchName")
                  .withJsonTag("search_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepoId")
                  .withJsonTag("repo_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowProjectReleaseFiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowProjectStorageInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ParentId")
                  .withJsonTag("parent_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowProjectVersionsCount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BuildVersion")
                  .withJsonTag("build_version")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowReleaseProjectFiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowRepoUserInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowRepository() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Region")
                  .withJsonTag("region")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowRepositoryInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowRepositoryRolesPrivilege() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowStorage() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FormatList")
                  .withJsonTag("format_list")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InProject")
                  .withJsonTag("in_project")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowUserPrivileges() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowUserTicket() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForShowVersionList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BuildVersion")
                  .withJsonTag("build_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForUpdateArtifactory() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsArtifactMeta::genRequestDefForUpdateRepoRolesPrivilege() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

